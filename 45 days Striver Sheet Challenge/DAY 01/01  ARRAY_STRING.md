## 📦 Problem: Largest Element in Array  

### 🟡 Pattern  
**Traversal + Comparison (Max Tracking)**  

---

### 🧠 Core Idea  
- Assume first element as largest  
- Traverse entire array  
- Update largest whenever bigger element found  

---

### 🔁 Flow  
arr[0] → assume max  
→ compare arr[i]  
→ if bigger → update max  
→ repeat till end  
→ final answer  

---

### 💡 Key Rule  
❗ Never initialize max = 0  
✅ Always use: `max = arr[0]`  

---

### 🔴 Common Mistake  
- Initializing max = 0 ❌  
- Fails for negative numbers  

---

### 🟣 Edge Cases  
- All elements negative → [-5, -2, -10]  
- Single element array  
- All elements same  

---

### 🔵 Example  

Input:  
`[4, 2, 9, 1]`  

Step:  
- max = 4  
- compare 2 → no change  
- compare 9 → update  
- compare 1 → no change  

Output:  
`9`  

---

### ⚡ Upgrade Problems  
- Second Largest Element  
- Smallest Element  
- Maximum in Subarray  
- Kth Largest Element  

---

### 🏁 Complexity  
- Time: O(n)  
- Space: O(1)  