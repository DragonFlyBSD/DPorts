# Created by: Ying-Chieh Liao <ijliao@csie.nctu.edu.tw>
# $FreeBSD: www/p5-WWW-Scraper-ISBN-ORA_Driver/Makefile 326139 2013-09-03 12:27:09Z az $

PORTNAME=	WWW-Scraper-ISBN-ORA_Driver
PORTVERSION=	0.20
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Search driver for O'Reilly & Associates's online catalog

BUILD_DEPENDS=	p5-WWW-Scraper-ISBN>=0.25:${PORTSDIR}/www/p5-WWW-Scraper-ISBN
RUN_DEPENDS=	p5-Template-Extract>=0:${PORTSDIR}/textproc/p5-Template-Extract \
		p5-WWW-Mechanize>=0:${PORTSDIR}/www/p5-WWW-Mechanize \
		p5-WWW-Scraper-ISBN-Driver>=0.18:${PORTSDIR}/www/p5-WWW-Scraper-ISBN-Driver

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::Scraper::ISBN::ORA_Driver.3

.include <bsd.port.mk>
