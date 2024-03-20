# Autoimmune Hemolytic Anemia

## General

- It is of 2 types
	- Warm AIHA 
		- Ab attach at 37<sup>o</sup> C
		- IgG >>> IgA
	- Cold AIHA
		- Ab attach at lower temperature
		- IgM >>> IgG
## Warm AIHA

### Causes

- Idiopathic
- Auto-immune disorders
	- SLE
	- RA
- Malignancies
	- CLL
- Drugs
	- $\alpha$-methyldopa
	- Penicillin
	- Quinidine
### Clinical Features
- Jaundice
- Anemia
- Splenomegaly
- Spherocyte in PBS

### Diagnosis
- $\uparrow$ LDH
- $\uparrow$ Unconjugated Bil.
- $\downarrow$ Hb
- Blood
	- PBS  $\rightarrow$ Spherocytes
	- Presence of autoantibodies
		- On RBC surface  $\rightarrow$ Direct Coomb's Test
		- Serum  $\rightarrow$ Indirect Coomb's Test

## Cold AIHA

### Types
- Cold Agglutinin Disease
- Cold Hemolysin

### Cold Agglutinin

```mermaid
graph TD

n1(IgM for I antigen of RBC)
n2(Binds to RBC at cold temp)
n3(Clumping/Agglutination of RBC)
n3.1(Acrocyanosis)
n3.2(At 37<sup>o</sup> C)
n3.2.1(Detachment of IgM)

n1.1(Compliment Proteins)
n1.2(C<sub>3</sub>b attachment)
n1.3(Destrution in Hepatic circulation)

n1 --> n2
n2 --> n3
n3 --> n3.1
n3 --- n3.2 --> n3.2.1

n1 --> n1.1
n1.1 --> n1.2
n1.2 ---> |Kuppfer Cells|n1.3
```
#### Clinical Features
- Jaundice
- Anemia
- Acrocyanosis at low temp
- Hepatomegaly

#### Associations with Cold Agglutination Dieases (IgM)

- **Mycoplasma infections**
- **Malignancies**
- Infectious mononucleosis
- **Waldenstrom macroglobulinemia**

#### Diagnosis
- Cold slide test
	![ColdSlideTest](Pathology/Images/ColdSlideTest.jpg)

### Cold Hemolysin Type

- Formation if **IgG against P antigen** of RBC
- Binds at 4<sup>o</sup> C  $\rightarrow$ Compliment Activation at 37<sup>o</sup> C  $\rightarrow$ MAC formation  $\rightarrow$ **Intravascular hemolysis**  $\rightarrow$ Hemoglobinuria
- Also called *Paroxysmal Cold Hemoglobinura*
- Cold Hemolysin  $\rightarrow$ **Donath Landsteiner Ab**
- Can be seen with
	- Viral Infections in Children
	- Syphylis

## Summary

```mermaid
graph TD

n1(AIHA)
n2(Warm)
n2.1(IgG)
n2.2(IgA)
n3(Cold)
n4(Agglutinin)
n4.1(IgM)
n5(Hemolysin)
n5.1(IgG)

n1 --- n2
n2 ---- n2.1
n2 ---- n2.2
n1 --- n3
n3 --- n4
n3 --- n5
n4 --- n4.1
n5 --- n5.1
```
- Warm
	- IgG/IgA
	- Causes
		- Idiopathic
		- Drugs
		- SLE
		- RA
	- RBC destruction at **Spleen**
- Cold
	- Agglutinin
		- IgM
		- RBC destruction at **Liver**
		- Ab attachment at lower temp
		- Extravascular Hemolysis
	- Hemolysin
		- IgG
		- Biphasic Ab
			- Attachment at 4<sup>o</sup> C
			- Compliment activation at 37<sup>o</sup> C
		- Intravascular hemolysis