# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: devel/p5-Spoon/Makefile 332205 2013-10-31 07:36:25Z vanilla $

PORTNAME=	Spoon
PORTVERSION=	0.24
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:INGY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Spiffy Application Building Framework

BUILD_DEPENDS=	p5-Spiffy>=0:${PORTSDIR}/devel/p5-Spiffy \
		p5-IO-All>=0:${PORTSDIR}/devel/p5-IO-All \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.mk>
