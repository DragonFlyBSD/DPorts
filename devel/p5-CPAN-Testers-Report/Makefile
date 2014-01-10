# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-CPAN-Testers-Report/Makefile 338878 2014-01-06 13:41:40Z az $

PORTNAME=	CPAN-Testers-Report
PORTVERSION=	1.999001
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAGOLDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	CPAN Testers report object

BUILD_DEPENDS=	p5-Metabase-Fact>0:${PORTSDIR}/devel/p5-Metabase-Fact
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
