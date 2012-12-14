# $FreeBSD: ports/textproc/p5-Version-Next/Makefile,v 1.2 2012/11/17 06:02:11 svnexp Exp $

PORTNAME=	Version-Next
PORTVERSION=	0.002
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAGOLDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Increment module version numbers simply and correctly

BUILD_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Version::Next.3

.include <bsd.port.mk>
