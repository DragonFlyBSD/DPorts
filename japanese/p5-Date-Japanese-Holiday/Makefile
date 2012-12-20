# New ports collection makefile for:	p5-Date-Japanese-Holiday
# Date created:		Mar 29, 2005
# Whom:			kuriyama@FreeBSD.org
#
# $FreeBSD: ports/japanese/p5-Date-Japanese-Holiday/Makefile,v 1.6 2012/11/17 05:58:38 svnexp Exp $
#

PORTNAME=	Date-Japanese-Holiday
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	japanese perl5
MASTER_SITES=	CPAN

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl module for Calculate Japanese Holiday

RUN_DEPENDS=	p5-Date-Calc>5.3:${PORTSDIR}/devel/p5-Date-Calc \
		p5-Date-Simple>1.03:${PORTSDIR}/devel/p5-Date-Simple \
		p5-Time-modules>0.01:${PORTSDIR}/devel/p5-Time-modules
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Date::Japanese::Holiday.3

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

.include <bsd.port.post.mk>
