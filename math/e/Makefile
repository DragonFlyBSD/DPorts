# Created by: snowy
# $FreeBSD: math/e/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	e
PORTVERSION=	0.02718
CATEGORIES=	math
MASTER_SITES=	http://www.softnet.tuc.gr/~apdim/projects/e/

MAINTAINER=	snowy@netphile.de
COMMENT=	A tiny expression evaluator

MAKEFILE=	makefile
ALL_TARGET=	e

NO_STAGE=	yes
post-patch:
	@${RM} ${WRKSRC}/${PORTNAME}
	@${REINPLACE_CMD} -e 's|gcc|${CC}|g ; \
		s|-O2|${CFLAGS}|g' ${WRKSRC}/makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for i in EXAMPLES GRAMMAR README
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
