# Created by: Daniel Gerzo <danger@FreeBSD.org>
# $FreeBSD: www/uwsgi/Makefile 330629 2013-10-17 11:07:22Z demon $

PORTNAME=	uwsgi
PORTVERSION=	1.9.18.2
CATEGORIES=	www python
MASTER_SITES=	http://projects.unbit.it/downloads/

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Developer-friendly WSGI server which uses uwsgi protocol

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE


USE_PYTHON=	yes
USE_RC_SUBR=	uwsgi

LDFLAGS+=	"-L${LOCALBASE}/lib"

PLIST_FILES=	bin/uwsgi \
		%%PYTHON_SITELIBDIR%%/uwsgidecorators.py

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's|python|${PYTHON_CMD}|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	${MKDIR} ${PYTHONPREFIX_SITELIBDIR}
	${INSTALL_DATA} ${WRKSRC}/uwsgidecorators.py ${PYTHONPREFIX_SITELIBDIR}

.include <bsd.port.mk>
