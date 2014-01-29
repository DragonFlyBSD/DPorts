# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: www/ljdump/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ljdump
PORTVERSION=	1.5
CATEGORIES=	www python
MASTER_SITES=	http://hewgill.com/ljdump/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to download LiveJournal entries and comments

PORTSCOUT=	skipv:1.5.1	# 1.5.1 is identical to 1.5 + our patches

NO_BUILD=	yes
USE_PYTHON_RUN=	yes

PLIST_FILES=	bin/ljdump etc/ljdump.config.sample

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's,%%LOCALBASE%%,${LOCALBASE}, ; \
		s,%%PREFIX%%,${PREFIX},' ${WRKSRC}/ljdump.py

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/ljdump.py ${PREFIX}/bin/ljdump
	${INSTALL_DATA} ${WRKSRC}/ljdump.config.sample ${PREFIX}/etc

.include <bsd.port.mk>
