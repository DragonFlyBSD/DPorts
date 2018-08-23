# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-Data-OptList/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Data-OptList
PORTVERSION=	0.110
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and validate simple name/value option pairs

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Params-Util>=0.14:devel/p5-Params-Util \
		p5-Sub-Install>=0.92:devel/p5-Sub-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
