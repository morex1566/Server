#pragma once
#include <thread>	
#include <mutex>
#include <vector>
#include <queue>
#include <functional>

class Thread
{
private:
	static int threadCount;
	std::vector<std::thread> threads;
	std::queue<std::function <void()>> jobs;
	std::mutex mutex;

private:
	void threadClient();

public:
	Thread();
	Thread(const Thread&) = delete;
	~Thread();

	void update();
	void enqueueJob();
};

