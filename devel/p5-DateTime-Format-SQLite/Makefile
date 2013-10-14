# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: devel/p5-DateTime-Format-SQLite/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	DateTime-Format-SQLite
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format SQLite dates and times

BUILD_DEPENDS=	p5-DateTime-Format-Builder>=0:${PORTSDIR}/devel/p5-DateTime-Format-Builder
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		DateTime::Format::SQLite.3

NO_STAGE=	yes
.include <bsd.port.mk>
