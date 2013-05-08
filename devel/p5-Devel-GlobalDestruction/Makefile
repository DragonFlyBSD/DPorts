# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: devel/p5-Devel-GlobalDestruction/Makefile 317174 2013-05-03 06:48:24Z culot $

PORTNAME=	Devel-GlobalDestruction
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Expose PL_dirty, the flag which marks global destruction

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Sub-Exporter-Progressive>=0.001.006:${PORTSDIR}/devel/p5-Sub-Exporter-Progressive
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Devel::GlobalDestruction.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
PLIST_SUB+=	PP="@comment " XS=""
.else
PLIST_SUB+=	PP="" XS="@comment "
.endif

.include <bsd.port.post.mk>
