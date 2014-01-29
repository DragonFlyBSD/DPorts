# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD: shells/jailkit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	jailkit
PORTVERSION=	2.15
CATEGORIES=	shells
MASTER_SITES=	http://olivier.sessink.nl/jailkit/ \
		http://www.sfr-fresh.com/unix/privat/

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Utilities to limit user account

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	PYTHONINTERPRETER=${PYTHON_CMD}
USE_PYTHON=	2

SHELLS=		/etc/shells

PORTDOCS=	COPYRIGHT README.txt

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
