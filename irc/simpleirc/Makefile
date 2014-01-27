# Created by: Dennis Herrmann <adox@mcx2.org>
# $FreeBSD: irc/simpleirc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	simpleirc
PORTVERSION=	1.2
CATEGORIES=	irc
MASTER_SITES=	http://dl.suckless.org/tools/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	dhn
DISTNAME=	sic-${PORTVERSION}

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Extremely simple IRC client

MAN1=		simpleirc.1
PLIST_FILES=	bin/simpleirc
PORTDOCS=	README LICENSE

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${ECHO_MSG} "installing additional documentation to ${DOCSDIR}"
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_MAN} ${WRKSRC}/README ${DOCSDIR}
	@${INSTALL_MAN} ${WRKSRC}/LICENSE ${DOCSDIR}
.endif

.include <bsd.port.mk>
