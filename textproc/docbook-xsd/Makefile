# Created by: ijliao
# $FreeBSD: textproc/docbook-xsd/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	docbook-xsd
PORTVERSION=	1.0.b1
CATEGORIES=	textproc
MASTER_SITES=	http://www.oasis-open.org/docbook/xmlschema/${PORTVERSION:S/.b/b/}/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.b/b/}

MAINTAINER=	gabor@FreeBSD.org
COMMENT=	DocBook W3C XML Schema

USE_ZIP=	yes
NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	@${MKDIR} ${DATADIR}
	@${CP} ${WRKSRC}/*.xsd ${DATADIR}
	@${FIND} ${DATADIR} -type f | \
		${SED} 's,^${PREFIX}/,,' >> ${TMPPLIST}
	@${FIND} ${DATADIR} -type d | ${SORT} -r | \
		${SED} 's,^${PREFIX}/,@dirrm ,' >> ${TMPPLIST}

.include <bsd.port.mk>
