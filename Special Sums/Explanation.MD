# Special Sums :

#### Problem Link : https://www.codechef.com/INOIPRAC/problems/INOI1501
#### Difficulty : Medium
#### Pre-Requisites : Prefix Sums

## Understanding the Problem :

We are given two arrays of N integers -> a and b
We define SSUM[i,j] as

a[i] if i = j /
a[i] + a[j] + b[i+1] + b[i+2] + .... + b[j-1]  if i < j /
a[i] + a[j] + b[i+1] + b[i+2] + .... + b[n] + b[1] + b[2] + .... + b[j-1]  if i > j /

We have to determine the maximum possible SSUM[i,j] for all pairs of i,j.

## Step-By-Step Solution :

<details>
  <summary> Step 1 </summary>
  
  \
  This is a very important step\
  very bery
  
  ```cpp
  for(ll i = 0; i < n; i++){
    dp[i] = dp[i-1] + 1;
  }
  ```
  </details>

## Similar Problems :
