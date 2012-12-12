# New ports collection makefile for:	namazu2
# Date created:		25 February 2000
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/databases/namazu2/Makefile,v 1.61 2012/11/17 05:55:12 svnexp Exp $
#

PORTNAME=	namazu
PORTVERSION=	${NAMAZU_PORTVERSION}
CATEGORIES+=	databases www textproc
MASTER_SITES=	http://www.namazu.org/stable/
PKGNAMESUFFIX=	2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Full-text search system intended for easy use

BUILD_DEPENDS=	p5-File-MMagic>=0:${PORTSDIR}/devel/p5-File-MMagic
RUN_DEPENDS=	p5-File-MMagic>=0:${PORTSDIR}/devel/p5-File-MMagic

USE_PERL5=	yes
USE_ICONV=	yes
USE_GETTEXT=	yes
USE_AUTOTOOLS=	libtool
CONFIGURE_ARGS=	--with-perl5="${PERL}" \
		--with-libintl-prefix=${LOCALBASE} \
		--with-libiconv-prefix=${LOCALBASE}
USE_LDCONFIG=	yes

.include "${.CURDIR}/Makefile.common"

MAN1=		namazu.1 mknmz.1

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|doc||g' ${WRKSRC}/Makefile.in

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/*.css ${DOCSDIR}
	@${MKDIR} ${DOCSDIR}/en
	${INSTALL_DATA} ${WRKSRC}/doc/en/*.html ${DOCSDIR}/en
	@${MKDIR} ${DOCSDIR}/ja
	${INSTALL_DATA} ${WRKSRC}/doc/ja/*.html ${DOCSDIR}/ja
.endif

.include <bsd.port.mk>
