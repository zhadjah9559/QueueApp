class QueueClass
{
    private:
            int* data;
            int capacity;
            int nElements;
            static const int initialSize = 5;
            int* front;
            int* rear;

    public:
            QueueArray();
            ~QueueArray();
            int getSize();
            bool Enqueue(int userInput);
            bool Dequeue();
            void toString();
            int getCurrentSize();

};
