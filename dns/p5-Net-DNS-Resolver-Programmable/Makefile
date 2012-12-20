# New ports collection makefile for:	p5-Net-DNS-Resolver-Programmable
# Date created:				February 9, 2007
# Whom:	      				Koen Martens <gmc@sonologic.nl>
#
# $FreeBSD: ports/dns/p5-Net-DNS-Resolver-Programmable/Makefile,v 1.6 2012/11/17 05:57:10 svnexp Exp $
#

PORTNAME=	Net-DNS-Resolver-Programmable
PORTVERSION=	0.003
CATEGORIES=	dns net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	gmc@sonologic.nl
COMMENT=	Programmable DNS resolver for off-line testing

RUN_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS \
		p5-version>=0:${PORTSDIR}/devel/p5-version
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes
PERL_CONFIGURE=	yes

MAN3=		Net::DNS::Resolver::Programmable.3

.include <bsd.port.pre.mk>

PORTDOCS=	CHANGES README TODO
DOCSDIR=	${PREFIX}/share/doc/p5-Net-DNS-Resolver-Programmable

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for doc in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${doc} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.post.mk>
