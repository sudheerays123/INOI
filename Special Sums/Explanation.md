# Special Sums :

#### Problem Link : https://www.codechef.com/INOIPRAC/problems/INOI1501
#### Difficulty : Medium

<details>
  <summary> Prerequisite </summary>
    <br>
   **Prefix Sums**
  </details>

## Understanding the Problem :

Given two arrays, A and B of equal lengths n. 

```
SSUM[i, j] is defined as : 

  Case 1 (i = j) : A[i]
  
  Case 2 (i < j) : A[i] + B[i+1] + B[i+2] + .... + B[j-1] + A[j]
  
  Case 3 (i > j) : A[i] + B[i+1] + B[i+2] + .... + B[n] + B[1] + B[2] + .... + B[j-1] + A[j]
```
Case 2 : 
\
![alt text](https://i.imgur.com/GbtO2Z6.png)\
Case 3 : \
![alt text](https://i.imgur.com/HCjEaq0.png)

Determine the maximum possible value of SSUM[i, j] for all pairs (i, j).

## Step-By-Step Solution :

<details>
  <summary> Step 1 </summary>
  
  </details>
