# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: textproc/p5-Parse-CSV/Makefile 340668 2014-01-21 22:29:50Z mat $

PORTNAME=	Parse-CSV
PORTVERSION=	2.00
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Highly flexible CVS parser for large files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Params-Util>=0.22:${PORTSDIR}/devel/p5-Params-Util \
		p5-Text-CSV_XS>=0.42:${PORTSDIR}/textproc/p5-Text-CSV_XS
RUN_DEPENDS=	p5-Params-Util>=0.22:${PORTSDIR}/devel/p5-Params-Util \
		p5-Text-CSV_XS>=0.42:${PORTSDIR}/textproc/p5-Text-CSV_XS

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
