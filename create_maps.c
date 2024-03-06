#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_map_name(char* md_name) {
	char* map_name = malloc(strlen(md_name) + 5 - 2 + 4 + 1); // maps/ .md to .html + null terminator
	strcpy(map_name, md_name);
	strcpy(map_name + strlen(md_name) - 2, "html");
	// Replace / with _ to avoid creating subdirectories
	for (int i = 0; i < strlen(map_name); i++) {
		if (map_name[i] == '/') {
			map_name[i] = '_';
		} else if (map_name[i] == ' ') {
			map_name[i] = '_';
		}
	}
	// Add maps/ to the beginning
	char* temp = malloc(strlen(map_name) + 5 + 1);
	strcpy(temp, "maps/");
	strcat(temp, map_name);
	free(map_name);
	map_name = temp;
	return map_name;
}

void create_map(char* md_name) {
	char* map_name = get_map_name(md_name);
	// Command : markmap --no-open -o <map_name> <md_name>
	char command[100] = "markmap --no-open -o ";
	strcat(command, map_name);
	strcat(command, " \"");
	strcat(command, md_name);
	strcat(command, "\"");
	system(command);
	printf("%s\n", command);
	free(map_name);
}

void create_maps(const char* dir_name) {
	DIR* dir = opendir(dir_name);
	struct dirent* entry;
	while ((entry = readdir(dir)) != NULL) {
		if (entry->d_type == DT_REG) {
			char* md_name = entry->d_name;
			if (strstr(md_name, ".md") != NULL) {
				char* complete_md_name = malloc(strlen(md_name) + strlen(dir_name) + 2);
				strcpy(complete_md_name, dir_name);
				strcat(complete_md_name, "/");
				strcat(complete_md_name, md_name);
				create_map(complete_md_name);
				free(complete_md_name);
			}
		} else if (entry->d_type == DT_DIR) {
			if (entry->d_name[0] != '.') {
				char* sub_dir_name = entry->d_name;
				char* complete_sub_dir_name = malloc(strlen(sub_dir_name) + strlen(dir_name) + 2);
				strcpy(complete_sub_dir_name, dir_name);
				strcat(complete_sub_dir_name, "/");
				strcat(complete_sub_dir_name, sub_dir_name);
				create_maps(complete_sub_dir_name);
				free(complete_sub_dir_name);
			}
		}
	}
	closedir(dir);
}

int main() {
	DIR* dir = opendir(".");
	// Check if the maps directory exists
	if (opendir("maps") == NULL) {
		system("mkdir maps");
	}
	create_maps(".");
	return 0;
}
