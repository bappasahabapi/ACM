<h1>Sorting Algorithms</h1>

> sorting slgorithms হচ্ছে কোনো একটা array কে ascending order এ কিংবা descending order এ সাজানোর জন্য ( ছোট থেকে বড় কিংবা বড় থেকে ছোট )। আমরা এই sorting algorithms এর মধ্যে অনেকগুলো algorithms পাই জেগুলো ব্যবহার করে খুব সহজে যেকোনো array sort করতে পারবো। নিচে কিছু দেয়া হলো,

<h2>Bubble Sort</h2>

  **bubble sort** এর মাধ্যমে আমরা একটি **array এর ২টি value নিয়ে**  তাদের মধ্যে `compare` করে দেখবো যে প্রথম value এর চেয়ে দ্বিতীয় value বড় নাকি ছোট .

 যদি বড় হয় তাহলে আমরা swape করবো value গুলোকে, যেমন আমাদের প্রথম value বড় হলো দ্বিতীয় value এর চেয়ে তাহলে তো আমরা বুঝতে পারছি যে আমাদের ডান পাশের value টি হচ্ছে ছোট value এবং তাকে বাম পাশে আনতে হবে এবং বাম পাশের value কে ডান পাশে দিতে হবে। এভাবেই চেক করে করে আমরা bubble sorting করবো। 

এবং আরেকটা কথা হচ্ছে আমরা যখন সর্বশেষ লাস্ট বড় এলিমেন্ট পেয়ে যাব তখন দ্বিতীয় বার আর ওই লাস্ট এলিমেন্টকে বাম পাশের এলিমেন্ট দ্বারা চেক করবো না এবং এভাবেই চেকিং হবে।

> নিচে কয়েকটি স্টেপের মাধ্যমে আর ক্লিয়ার করার চেষ্টা করেছি

</br>
<img src="https://www.programiz.com/sites/tutorial2program/files/Bubble-sort-0.png">
</br>
<img src="https://www.programiz.com/sites/tutorial2program/files/Bubble-sort-1.png">
</br>
<img src="https://www.programiz.com/sites/tutorial2program/files/Bubble-sort-2.png">

</br>
<img src="https://www.programiz.com/sites/tutorial2program/files/Bubble-sort-3.png">

> আমি একটা ওয়েবসাইটের লিংক দিচ্ছি যেটাতে গেলে আপনি একটি ভিডিওর মাধ্যমে আরো ভাবে বুঝতে পারবেন যে operation টি হচ্ছে কেমনে।

https://visualgo.net/en/sorting