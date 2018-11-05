	int check[K];
	for (int i = 0; i < (pow(~,K)); i++) {
		int temp = i;
		for (int j = (K-1); j >= 0; j--) {
			int pownum = pow(~,j);
			check[j] = (temp / pownum);
			temp %= pownum;
		}
		/*for(int j = 0; j < K; j++) {
			cout << check[j] << " ";
		}
		cout << endl;*/
		
	}
