# New ports collection makefile for:	p5-Jabber-SimpleSend
# Date created:		2006-08-19
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net-im/p5-Jabber-SimpleSend/Makefile,v 1.8 2012/11/17 06:00:28 svnexp Exp $
#

PORTNAME=	Jabber-SimpleSend
PORTVERSION=	0.03
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Send a Jabber message simply

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Net-Jabber>=0:${PORTSDIR}/net-im/p5-Net-Jabber
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Jabber::SimpleSend.3

.include <bsd.port.mk>
