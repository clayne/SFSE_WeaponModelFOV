#pragma once

<<<<<<< HEAD
#include <string>
#include <Windows.h>

class DirectoryIterator
{
public:
	DirectoryIterator() = delete;
	DirectoryIterator(const char * path, const char * match = nullptr);
	~DirectoryIterator();

	WIN32_FIND_DATA *	get()	{ return &m_result; }
	void		fullPath(char * out, size_t outLen);
	std::string	fullPath();

	void	next();
	bool	done() { return m_done; }

private:
	HANDLE			m_searchHandle;
	WIN32_FIND_DATA	m_result;
	bool			m_done;

	char	m_path[MAX_PATH];
=======
#include <Windows.h>
#include <string>

class DirectoryIterator {
public:
  DirectoryIterator() = delete;
  DirectoryIterator(const char *path, const char *match = nullptr);
  ~DirectoryIterator();

  WIN32_FIND_DATA *get() { return &m_result; }
  void fullPath(char *out, size_t outLen);
  std::string fullPath();

  void next();
  bool done() { return m_done; }

private:
  HANDLE m_searchHandle;
  WIN32_FIND_DATA m_result;
  bool m_done;

  char m_path[MAX_PATH];
>>>>>>> 11ad18d6b375ff01709996cfabff128af874a1fc
};
