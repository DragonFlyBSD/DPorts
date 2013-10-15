# Created by: Pav Lucistnik <pav@oook.cz>
# $FreeBSD: net-p2p/torrentsniff/Makefile 327758 2013-09-20 22:28:25Z bapt $

PORTNAME=	torrentsniff
PORTVERSION=	0.3.0
CATEGORIES=	net-p2p perl5
MASTER_SITES=	http://www.highprogrammer.com/alan/perl/

MAINTAINER=	jharris@widomaker.com
COMMENT=	Commandline tool for getting status of torrent

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1

NO_BUILD=	yes
USES=		shebangfix perl5
SHEBANG_FILES=	torrentsniff

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/torrentsniff ${LOCALBASE}/bin
	${MKDIR} ${SITE_PERL}/BitTorrent
	${INSTALL_DATA} ${WRKSRC}/BitTorrent/BDecode.pm ${SITE_PERL}/BitTorrent

.include <bsd.port.mk>
