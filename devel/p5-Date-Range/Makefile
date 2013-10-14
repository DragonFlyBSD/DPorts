# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: devel/p5-Date-Range/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Date-Range
PORTVERSION=	1.41
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Date::Range - work with a range of dates

BUILD_DEPENDS=	p5-Date-Simple>=0.03:${PORTSDIR}/devel/p5-Date-Simple
RUN_DEPENDS=	p5-Date-Simple>=0.03:${PORTSDIR}/devel/p5-Date-Simple

USES=		perl5
USE_PERL5=	configure

MAN3=		Date::Range.3

NO_STAGE=	yes
.include <bsd.port.mk>
