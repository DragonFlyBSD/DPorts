# Created by: knu@FreeBSD.org
# $FreeBSD: devel/cvsutils/Makefile 334080 2013-11-17 12:40:16Z mva $

PORTNAME=	cvsutils
PORTVERSION=	0.2.6
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.red-bean.com/cvsutils/releases/

MAINTAINER=	mva@FreeBSD.org
COMMENT=	CVS utilities which facilitate working with local working directories

LICENSE=	GPLv2

USES=		perl5 shebangfix
GNU_CONFIGURE=	yes
SHEBANG_FILES=	cvs*.pl

OPTIONS_DEFINE=	DOCS

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in AUTHORS ChangeLog NEWS README
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
