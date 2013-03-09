# $FreeBSD: ports/ports-mgmt/poudriere/Makefile,v 1.25 2012/12/01 16:26:36 svnexp Exp $

PORTNAME=	poudriere-boom
PORTVERSION=	2.3
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://fossil.etoilebsd.net/poudriere/tarball/
DISTFILES=	poudriere-${PORTVERSION}${EXTRACT_SUFX}?uuid=${PORTVERSION}

# Also maintained by bdrewery@freeBSD.org
MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Port build and test system

LICENSE=	BSD

NO_BUILD=	yes
MANCOMPRESSED=	yes
MAN8=	poudriere.8

WRKSRC=		${WRKDIR}/poudriere-${PORTVERSION}
OPTIONS_DEFINE=	ZSH
ZSH_DESC=	Install zsh completion

CONFLICTS_INSTALL=	poudriere-[0-9]*

PLIST_FILES=	etc/poudriere.conf.sample \
		bin/poudriere \
		share/poudriere/bulk.sh \
		share/poudriere/clean.sh \
		share/poudriere/common.sh \
		share/poudriere/cron.sh \
		share/poudriere/distclean.sh \
		share/poudriere/jail.sh \
		share/poudriere/options.sh \
		share/poudriere/ports.sh \
		share/poudriere/queue.sh \
		share/poudriere/test_ports.sh

PLIST_DIRS=	share/poudriere

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MZSH}
PLIST_FILES+=	share/zsh/site-functions/_poudriere
PLIST_DIRSTRY+=	share/zsh/site-functions
PLIST_DIRSTRY+=	share/zsh/
.endif

post-install:
.if ${PORT_OPTIONS:MZSH}
	@${MKDIR} ${PREFIX}/share/zsh/site-functions/
	@${INSTALL_DATA} ${WRKSRC}/zsh-completions ${PREFIX}/share/zsh/site-functions/_poudriere
.endif

.include <bsd.port.mk>
