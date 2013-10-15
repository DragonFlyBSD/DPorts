# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: devel/p5-DateTime-Precise/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	DateTime-Precise
PORTVERSION=	1.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perform common time and date operations with additional GPS operations

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		DateTime::Precise.3

NO_STAGE=	yes
.include <bsd.port.mk>
