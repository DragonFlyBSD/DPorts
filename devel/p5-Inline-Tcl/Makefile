# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Inline-Tcl/Makefile 332028 2013-10-30 01:38:24Z vanilla $

PORTNAME=	Inline-Tcl
PORTVERSION=	0.09
CATEGORIES=	devel perl5 tcl
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Write Perl subroutines in Tcl

BUILD_DEPENDS=	p5-Inline>=0:${PORTSDIR}/devel/p5-Inline
#LIB_DEPENDS=	tcl84:${PORTSDIR}/lang/tcl84
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 tcl
USE_PERL5=	configure
CONFIGURE_ARGS=	INC="-I${TCL_INCLUDEDIR}" \
		LIBS="-L${TCL_LIBDIR} -R${TCL_LIBDIR} -ltcl${TCL_SHLIB_VER}"

post-patch:
	@${REINPLACE_CMD} -i.bak '2,99d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
