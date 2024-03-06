use std::path::Path;

fn create_maps(path: &Path) {
    for entry in path.read_dir().unwrap() {
        let entry = entry.unwrap();
        let path = entry.path();
        if path.is_dir() {
            create_maps(&path);
        } else {
            if let Some(ext) = path.extension() {
                if ext == "md" {
                    let mapname = path.file_stem().unwrap().to_str().unwrap();
                    // Replace all spaces with underscores and all / with
                    // underscores
                    let mapname = mapname.replace(" ", "_").replace("/", "_");
                    let mapname = format!("maps/{}.html", mapname);
                    let command_str = format!("markmap --no-open -o \"{:?}\" {:?}", mapname, path);
                    println!("{}", command_str);
                    let status = std::process::Command::new("sh")
                        .arg("-c")
                        .arg(command_str)
                        .status()
                        .unwrap();
                    assert!(status.success());
                }
            }
        }
    }
}

fn main() {
    if !Path::new("maps").exists() {
        std::fs::create_dir("maps").unwrap();
    }
    create_maps(Path::new("."));
}
