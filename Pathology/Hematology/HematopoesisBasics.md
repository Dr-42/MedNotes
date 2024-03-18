# Hematopoesis Basics

## Hematopoetic Stem Cell
- Identified by [**CD34**](Pathology/Misc/CDAssiciations)
- Pluripotent cell
- Hematopoesis starts at fetal life
	- At 3 weeks HSC is present in 
		- Yolk Sac
		- Mesoderm
			- Aorta
			- Gonads
			- Mesonephros
	- At 3 months
		- Liver
		- Spleen
		- Lymph Nodes
	- At birth
		- Bone Marrow of all bones
	- At puberty
		- Bone marrow of axial skeleton
		- Bone marrow at ends of long bones

## Hematopoesis
```mermaid
flowchart

n1(HSC)
n2(MSC)

n2.1(Myeloid SC)
n2.2(Lymphoid SC)

n2.1.1(Granulocyte/Monocyte CFU)
n2.1.2(Erythrocyte/Megakaryocyte CFU)

n2.1.1.1(Granulocyte CFU)
n2.1.1.2(Monocyte CFU)
n2.1.2.1(Erythroblast)
n2.1.2.2(Megakaryocyte)

n2.1.1.1.1(Granulocytes)
n2.1.1.1.2(Neutrophils)
n2.1.1.1.3(Eosinophils)
n2.1.1.1.4(Basophils)
n2.1.1.2.1(Monocytes)

n2.1.2.1.1(RBC)
n2.1.2.2.1(Platelets)

n2.2.1(B cell)
n2.2.2(T cell)
n2.2.3(NK cell)

n1 -->n2
n2 -->n2.1
n2 -->n2.2

n2.1 -->n2.1.1
n2.1 -->n2.1.2

n2.1.1 -->n2.1.1.1
n2.1.1 -->n2.1.1.2

n2.1.1.1 -->n2.1.1.1.1
n2.1.1.1 -->n2.1.1.1.2
n2.1.1.1 -->n2.1.1.1.3
n2.1.1.1 -->n2.1.1.1.4

n2.1.1.2 -->n2.1.1.2.1

n2.1.2 -->n2.1.2.1
n2.1.2.1 -->n2.1.2.1.1

n2.1.2 -->n2.1.2.2
n2.1.2.2 -->n2.1.2.2.1

n2.2 ---->n2.2.1
n2.2 ---->n2.2.2
n2.2 ---->n2.2.3

```

### Myeloid SC
- Aka trilineage SC
- 20$\mu$ in size
- 3-4 nucleoli
- Granular cytoplasm
### Lymphoid SC
- 20$\mu$ in size
- 0-2 nucleoli
- Condensed nucleus
- Non-granular cytoplasm

## Growth promoters
| Cell      | Intrinsic GF  | Drug         |
| --------- | ------------- | ------------ |
| RBC       | Erythropoetin | Darbopoietin |
| Platelets | IL-11         | Oprelvekin   |
| GM-CFU    | GM-CSF        | Sargramostim |
| G-CFU     | G-CSF         | Filgrastim   |

## Bone Marrow Examination
### Bone Marrow Aspiration
- To study 
	- Cell morphology
	- Enumeration
- Needles
	- Klima's Needle
		![KlimasNeedle](Pathology/Images/KlimasNeedle.jpg)
	- Salah's Needle
		![SalahsNeedle](Pathology/Images/SalahsNeedle.jpg)
- Size of needle  $\rightarrow$ 14 to 18gague
- Volume of sample  $\rightarrow$ 0.2 to mL
- Anticoagulant used  $\rightarrow$ EDTA
	- Prevents clotting 
	- Does not alter morphology
### Bone Marrow Biopsy
- To study
	- Cellularity
	- Fibrosis
	- Infiltrative disorders
- Needles
	- Jamshedi Needle (Trephine)
	![JamshediNeedle](Pathology/Images/JamshediNeedle.jpg)	
- Ideal site
	- Adults  $\rightarrow$ PSIS
	- Obese adult  $\rightarrow$ ASIS
	- Child  $\rightarrow$ Anterio end of tibia
- MC S/E  $\rightarrow$ Local site soreness
- BM exam can be done in individuals having low platelet count or mild clotting factor deficiency
- Pancytoenia seen in 
	- Aplastic Anemia
	- In conditions where damage to HSC
- Myeloproliferative Disorders
	- $\uparrow$ RBC
	- $\uparrow$ Platelets
	- $\uparrow$ WBC