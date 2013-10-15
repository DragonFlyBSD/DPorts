# Created by: ijliao
# $FreeBSD: textproc/mathml-xsd/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	mathml-xsd
PORTVERSION=	2
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.w3.org/Math/XMLSchema/
DISTNAME=	mathml${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The MathML XML Schema

NO_BUILD=	yes

NO_STAGE=	yes
post-extract:
	@${FIND} ${WRKSRC} -name "CVS" -type d -delete

do-install:
	@${MKDIR} ${DATADIR}
	@${CP} -R ${WRKSRC}/* ${DATADIR}
	@${FIND} ${DATADIR} -type f | \
		${SED} 's,^${PREFIX}/,,' >> ${TMPPLIST}
	@${FIND} ${DATADIR} -type d | ${SORT} -r | \
		${SED} 's,^${PREFIX}/,@dirrm ,' >> ${TMPPLIST}

.include <bsd.port.mk>
