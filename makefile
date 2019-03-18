source: ./bin ./log/data ./bin/bubble_sort.out ./bin/insertion_sort.out ./bin/selection_sort.out ./bin/heap_sort.out ./bin/merge_sort.out ./bin/quick_sort.out

./bin:
	mkdir -p ./bin

./bin/bubble_sort.out:
	g++ main.cpp ./sort_methods/bubble_sort.cpp -o ./bin/bubble_sort.out -Wall -Wextra -Werror -O3

./bin/insertion_sort.out:
	g++ main.cpp ./sort_methods/insertion_sort.cpp -o ./bin/insertion_sort.out -Wall -Wextra -Werror -O3

./bin/selection_sort.out:
	g++ main.cpp ./sort_methods/selection_sort.cpp -o ./bin/selection_sort.out -Wall -Wextra -Werror -O3

./bin/heap_sort.out:
	g++ main.cpp ./sort_methods/heap_sort.cpp -o ./bin/heap_sort.out -Wall -Wextra -Werror -O3

./bin/merge_sort.out:
	g++ main.cpp ./sort_methods/merge_sort.cpp -o ./bin/merge_sort.out -Wall -Wextra -Werror -O3

./bin/quick_sort.out:
	g++ main.cpp ./sort_methods/quick_sort.cpp -o ./bin/quick_sort.out -Wall -Wextra -Werror -O3

./log/data:
	mkdir -p ./log
	g++ ./number_generator/main.cpp -o ./bin/number_generator.out -O3
	./bin/number_generator.out > ./log/num_generator_log
	rm -f ./bin/number_generator.out

clean:
	find ./ -name bin -type d && rm -rf ./bin
	find ./ -name log -type d && rm -rf ./log
