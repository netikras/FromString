This is a tiny utility written in C language to parse java's toString() output to be more human-readable.


EXAMPLE OUTPUT:


    MyObject{
    	name='age',
    	value='6',
    	trend=MORE,
    	isOnline=false,
    	nestedObjects=[
    	.	MyObject{
    	.	.	name='uptime',
    	.	.	value='1',
    	.	.	trend=MORE,
    	.	.	isOnline=false,
    	.	.	nestedObjects=[
    	.	.	.	MyObject{
    	.	.	.	.	name='level',
    	.	.	.	.	value='13',
    	.	.	.	.	trend=MORE,
    	.	.	.	.	isOnline=false,
    	.	.	.	.	nestedObjects=[
    	.	.	.	.	.	.
    	.	.	.	.	],
    	.	.	.	.	nestedData=[
    	.	.	.	.	.	MyObject{
    	.	.	.	.	.	.	name='money',
    	.	.	.	.	.	.	value='100',
    	.	.	.	.	.	.	trend=EQUALS,
    	.	.	.	.	.	.	isOnline=false,
    	.	.	.	.	.	}
    	.	.	.	.	]
    	.	.	.	},
    	.	.	.	MyObject{
    	.	.	.	.	name='level',
    	.	.	.	.	value='20',
    	.	.	.	.	trend=LESS,
    	.	.	.	.	isOnline=false,
    	.	.	.	}
    	.	.	],
    	.	.	nestedData=[
    	.	.	.	.
    	.	.	]
    	.	}
    	],
    	nestedData=[
    	.	MyObject{
    	.	.	name='uptime',
    	.	.	value='7',
    	.	.	trend=LESS,
    	.	.	isOnline=false,
    	.	}
    	]
    }
    
