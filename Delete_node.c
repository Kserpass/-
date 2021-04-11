//删除*p的后继实现删除*p
q=p->next;
p->data=q->data;
p->next=q->next;
free(q);
