#include <libpq-fe.h>

int main()
{
    // psql 14+ pipeline mode
    PQenterPipelineMode(NULL);
    PQpipelineStatus(NULL);
    PQgetResult(NULL);
    PQsendFlushRequest(NULL);
    PQexitPipelineMode(NULL);
    PQgetResult(NULL);
}
