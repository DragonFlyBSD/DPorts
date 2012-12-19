# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Package-Variant/Makefile,v 1.2 2012/11/17 05:56:25 svnexp Exp $

PORTNAME=	Package-Variant
PORTVERSION=	1.001002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Parameterizable packages

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Import-Into>=0:${PORTSDIR}/devel/p5-Import-Into
RUN_DEPENDS=	p5-Import-Into>=0:${PORTSDIR}/devel/p5-Import-Into

PERL_CONFIGURE=	yes

MAN3=		Package::Variant.3

.include <bsd.port.mk>
