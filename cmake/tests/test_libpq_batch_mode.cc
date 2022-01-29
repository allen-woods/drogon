#include <libpq-fe.h>

int main()
{
    PQenterPipelineMode(NULL);
    PQpipelineStatus(NULL);
    PQpipelineSync(NULL);
    PQsendFlushRequest(NULL);
    PQexitPipelineMode(NULL);
}
