                continue;
            }
            int freq = 0;
            for(int el: nums){
                if(val == el){
                    freq++;
                }
            }
        }
            if(freq> n/3){
                result.emplace_back(val);
            }
    }
        return result;
};
