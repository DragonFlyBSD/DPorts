# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-B-Hooks-EndOfScope/Makefile 468019 2018-04-22 12:50:08Z sunpoet $

PORTNAME=	B-Hooks-EndOfScope
PORTVERSION=	0.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Execute code after a scope finished compilation

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENCE

BUILD_DEPENDS=	p5-Module-Implementation>=0.05:devel/p5-Module-Implementation \
		p5-Sub-Exporter-Progressive>=0.001006:devel/p5-Sub-Exporter-Progressive \
		p5-Variable-Magic>=0.48:devel/p5-Variable-Magic
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
