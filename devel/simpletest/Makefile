# Ports collection makefile for:  simpletest
# Date created:			  16 August 2004
# Whom:				  Roman Neuhauser (<neuhauser@chello.cz>)
#
# $FreeBSD: ports/devel/simpletest/Makefile,v 1.12 2012/11/17 05:57:03 svnexp Exp $
#

PORTNAME=	simpletest
PORTVERSION=	1.0.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}_${PORTVERSION}
DISTNAME=	${PORTNAME:tl}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unit testing, mock objects, and web testing framework for PHP

USE_PHP=	pcre
USE_PHP_BUILD=	yes
DEFAULT_PHP_VER=5
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME:tl}

.if !defined(NOPORTDOCS)
DOCFILES=	HELP_MY_TESTS_DONT_WORK_ANYMORE README
HTMLDOCFILES=	docs/en/*
.endif

DATAFILES=	*.php extensions test LICENSE VERSION

do-install:
	${MKDIR} ${DATADIR}
	cd ${WRKSRC}/ \
	  && ${FIND} ${DATAFILES} -type d -exec ${MKDIR} ${DATADIR}/{} \; \
	  && ${FIND} ${DATAFILES} -type f -exec ${INSTALL_DATA} {} ${DATADIR}/{} \;
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${MKDIR} ${DOCSDIR}/html
.for file in ${DOCFILES}
	${CP} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.for file in ${HTMLDOCFILES}
	${CP} ${WRKSRC}/${file} ${DOCSDIR}/html
.endfor
.endif

post-install:
	@${FIND} -s ${DATAFILES:S,^,${WRKSRC}/,} -not -type d \
	  | ${SED} -ne 's,^${WRKSRC},${DATADIR:S,^${PREFIX}/,,},p' >> ${TMPPLIST}
	@${FIND} -s -d ${DATAFILES:S,^,${WRKSRC}/,} -type d \
	  | ${SED} -ne 's,^${WRKSRC},@dirrm ${DATADIR:S,^${PREFIX}/,,},p' >> ${TMPPLIST}
	@${ECHO_CMD} "@dirrm ${DATADIR:S,^${PREFIX}/,,}" >> ${TMPPLIST}
.if !defined(NOPORTDOCS)
	@${FIND} -s ${DOCSDIR} -not -type d \
	  | ${SED} -ne 's,^${PREFIX}/,,p' >> ${TMPPLIST}
	@${FIND} -s -d ${DOCSDIR} -type d \
	  | ${SED} -ne 's,^${PREFIX}/,@dirrm ,p' >> ${TMPPLIST}
.endif

.include <bsd.port.mk>
