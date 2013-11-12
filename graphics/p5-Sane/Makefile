# Created by: chinsan
# $FreeBSD: graphics/p5-Sane/Makefile 332801 2013-11-05 01:33:02Z vanilla $

PORTNAME=	Sane
PORTVERSION=	0.05
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for the SANE (Scanner Access Now Easy) Project

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0:${PORTSDIR}/devel/p5-ExtUtils-Depends \
		p5-ExtUtils-PkgConfig>=0:${PORTSDIR}/devel/p5-ExtUtils-PkgConfig \
		${LOCALBASE}/bin/sane-config:${PORTSDIR}/graphics/sane-backends

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/^my $$inc = / s|-I\.|& -I${LOCALBASE}/include|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
