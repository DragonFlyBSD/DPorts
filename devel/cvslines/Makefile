# Created by: jkoshy
# $FreeBSD: devel/cvslines/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=		cvslines
PORTVERSION=		1.6.9
CATEGORIES=		devel
MASTER_SITES=		SF

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Wrapper to ease merging of changes between CVS branches

WRKSRC=			${WRKDIR}/${PORTNAME}
NO_BUILD=		yes
USES=			shebangfix perl5
SHEBANG_FILES=		cvslines
.for ii in s s_check s-check s-commit s-config s-status
PLIST_FILES+=	bin/cvsline${ii}
.endfor

MAN1=	cvslines.1

NO_STAGE=	yes
pre-patch:
	@${REINPLACE_CMD} -i '' -e 's|the the|the|' ${WRKSRC}/cvslines.1

do-install:
	PREFIX=${PREFIX} ${PERL5} ${WRKSRC}/INSTALL ${WRKSRC}/CONFIG

.include <bsd.port.mk>
