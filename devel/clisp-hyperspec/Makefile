# $FreeBSD: ports/devel/clisp-hyperspec/Makefile,v 1.5 2013/01/26 15:07:24 svnexp Exp $

PORTNAME=	clisp-hyperspec
PORTVERSION=	7.0
CATEGORIES=	devel lisp
MASTER_SITES=	ftp://ftp.lispworks.com/pub/software_tools/reference/
DISTNAME=	HyperSpec-7-0

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	A Common Lisp reference in HTML format, from LispWorks Ltd

NO_CDROM=	Commercial redistribution prohibited

WRKSRC=		${WRKDIR}
NO_BUILD=	yes

do-install:
	@${MKDIR} ${DOCSDIR}
	@${CP} -r ${WRKSRC}/* ${DOCSDIR}
	@${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${DOCSDIR}

.include <bsd.port.mk>
