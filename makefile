source: ./bin/bubble_sort.out ./bin/insertion_sort.out ./bin/selection_sort.out ./bin/heap_sort.out ./bin/merge_sort.out ./bin/quick_sort.out ./log/data

./bin/bubble_sort.out:
	g++ main.cpp ./sort_methods/bubble_sort.cpp -o ./bin/bubble_sort.out

./bin/insertion_sort.out:
	g++ main.cpp ./sort_methods/insertion_sort.cpp -o ./bin/insertion_sort.out

./bin/selection_sort.out:
	g++ main.cpp ./sort_methods/selection_sort.cpp -o ./bin/selection_sort.out

./bin/heap_sort.out:
	g++ main.cpp ./sort_methods/heap_sort.cpp -o ./bin/heap_sort.out

./bin/merge_sort.out:
	g++ main.cpp ./sort_methods/merge_sort.cpp -o ./bin/merge_sort.out

./bin/quick_sort.out:
	g++ main.cpp ./sort_methods/quick_sort.cpp -o ./bin/quick_sort.out

./log/data:
	g++ ./number_generator/main.cpp -o ./bin/number_generator.out
	./bin/number_generator.out

clean:
	rm ./bin/*

reset:
	rm ./log/*
