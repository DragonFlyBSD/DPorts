# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Inline-Tcl/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Inline-Tcl
PORTVERSION=	0.09
CATEGORIES=	devel perl5 tcl
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Write Perl subroutines in Tcl

BUILD_DEPENDS=	p5-Inline>=0:${PORTSDIR}/devel/p5-Inline
LIB_DEPENDS=	tcl84:${PORTSDIR}/lang/tcl84
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	INC="-I${PREFIX}/include/tcl8.4" \
		LIBS="-L${PREFIX}/lib -R${PREFIX}/lib -ltcl84"

MAN3=		Inline::Tcl.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -i.bak '2,99d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
