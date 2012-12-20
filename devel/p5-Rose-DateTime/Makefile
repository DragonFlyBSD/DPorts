# New ports collection makefile for:	devel/p5-Rose-DateTime
# Date created:				09 June 2006
# Whom:					Zach Thompson <hideo@lastamericanempire.com>
#
# $FreeBSD: ports/devel/p5-Rose-DateTime/Makefile,v 1.13 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	Rose-DateTime
PORTVERSION=	0.537
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
