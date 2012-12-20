# New ports collection makefile for:	AnyEvent::Twitter::Stream
# Date created:				2010-04-18
# Whom:					Sahil Tandon <sahil@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-AnyEvent-Twitter-Stream/Makefile,v 1.9 2012/11/17 06:00:09 svnexp Exp $
#

PORTNAME=	AnyEvent-Twitter-Stream
PORTVERSION=	0.22
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sahil@FreeBSD.org
COMMENT=	A perl module to receive Twitter streaming API in an event loop

RUN_DEPENDS=	p5-AnyEvent>=0:${PORTSDIR}/devel/p5-AnyEvent \
		p5-AnyEvent-HTTP>=2.0:${PORTSDIR}/www/p5-AnyEvent-HTTP \
		p5-JSON>=2.0:${PORTSDIR}/converters/p5-JSON \
		p5-URI>=0:${PORTSDIR}/net/p5-URI

PERL_CONFIGURE=	yes

MAN3=		AnyEvent::Twitter::Stream.3

.include <bsd.port.mk>
