# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: devel/p5-Rose-DateTime/Makefile 314829 2013-03-21 09:24:06Z tobez $

PORTNAME=	Rose-DateTime
PORTVERSION=	0.538
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DateTime helper functions and objects

BUILD_DEPENDS=	p5-Rose-Object>=0.82:${PORTSDIR}/devel/p5-Rose-Object \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Rose::DateTime.3 \
	Rose::DateTime::Parser.3 \
	Rose::DateTime::Util.3

.include <bsd.port.mk>
