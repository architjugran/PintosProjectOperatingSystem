#include "threads/palloc.h" 
#include <list.h>
#include "vm/page.h"
#include "threads/thread.h"
#include "threads/palloc.h"
void *framealloc (enum palloc_flags);
void freeframe (void *);
struct frame_table_element
{

  struct thread *t;
  void *frame;
  struct spt_elem *spte;
  struct list_elem elem;
};
static void frame_table_insert (void *, struct spt_elem *);
void frame_table_init (void);
